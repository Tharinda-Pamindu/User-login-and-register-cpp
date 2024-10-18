#pragma once

using namespace System;

public ref class User {
private:
	int id;
	String^ name;
	String^ email;
	String^ phone;
	String^ address;
	String^ password;
public:
	property int Id {
		void set(int id) { this->id = id; }
		int get() { return id; }
	}

	property String^ Name {
		void set(String^ name) { this->name = name; }
		String^ get() { return name; }
	}

	property String^ Email {
		void set(String^ email) { this->email = email; }
		String^ get() { return email; }
	}

	property String^ Phone {
		void set(String^ phone) { this->phone = phone; }
		String^ get() { return phone; }
	}

	property String^ Address {
		void set(String^ address) { this->address = address; }
		String^ get() { return address; }
	}

	property String^ Password {
		void set(String^ password) { this->password = password; }
		String^ get() { return password; }
	}
};