#include "global-public-private-key-pair.hpp"

GlobalPublicPrivateKeyPair::GlobalPublicPrivateKeyPair(
  const KeySqr<Face> &keySqr,
  const std::string &keyDerivationOptionsJson,
  const std::string &clientsApplicationId
) : DerivedPublicPrivateKeyPair (
  keySqr,
  keyDerivationOptionsJson,
  clientsApplicationId, 
  KeyDerivationOptionsJson::Purpose::ForPublicKeySealedMesssagesWithRestrictionsEnforcedPostDecryption
) {}

const MessageWithDecryptionRestrictions GlobalPublicPrivateKeyPair::unseal(
  const unsigned char* ciphertext,
  const size_t ciphertextLength
) const {
  return MessageWithDecryptionRestrictions(PublicPrivateKeyPair::unsealCiphertext(ciphertext, ciphertextLength));
}

const MessageWithDecryptionRestrictions GlobalPublicPrivateKeyPair::unseal(
  const std::vector<unsigned char> &ciphertext
) const {
  return MessageWithDecryptionRestrictions(PublicPrivateKeyPair::unsealCiphertext(ciphertext.data(), ciphertext.size()));
}

const GlobalPublicKey GlobalPublicPrivateKeyPair::getPublicKey() const {
  return GlobalPublicKey(publicKeyBytes, keyDerivationOptionsJson);
}
