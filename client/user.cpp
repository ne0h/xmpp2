#include "user.hpp"
#include "cryptohelper.hpp"

User::User(std::string username, CryptoHelper *cryptoHelper)
		: m_username(username), m_cryptoHelper(cryptoHelper), m_userKeyPair(m_cryptoHelper->generateKeyPair()),
			m_exchangeKeyPair(m_cryptoHelper->generateKeyPair()) {

}

KeyPair* User::getUserKeyPair() {
	return &m_userKeyPair;
}

KeyPair* User::getExchangeKeyPair() {
	return &m_exchangeKeyPair;
}

std::string User::getUsername() {
	return m_username;
}
