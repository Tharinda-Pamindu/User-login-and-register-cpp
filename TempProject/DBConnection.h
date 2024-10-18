#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

public ref class DBConnection {
private:
	static DBConnection^ connection = nullptr;
	SqlConnection^ sqlConnection;
	DBConnection() {
		String^ sqlConn = "Data Source=THARINDA\\SQLEXPRESS;Initial Catalog=userData;Integrated Security=True;Encrypt=False";
		sqlConnection = gcnew SqlConnection(sqlConn);
	}
public:
	static DBConnection^ GetInstance() {
		return connection = connection == nullptr ? gcnew DBConnection() : connection;
	}

	void OpenConnection() {
		if (sqlConnection->State != System::Data::ConnectionState::Open) {
			sqlConnection->Open();
		}
	}

	void CloseConnection() {
		if (sqlConnection->State==System::Data::ConnectionState::Open) {
			sqlConnection->Close();
		}
	}

	SqlConnection^ getConnection() {
		return sqlConnection;
	}
};
