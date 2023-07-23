#pragma once
#include "Registration.h"
#include "Chat.h"
namespace Chating {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Сводка для Authentication
	/// </summary>
	public ref class Authentication : public System::Windows::Forms::Form
	{
	public:
		Authentication(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Authentication()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ CloseButton;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ loginField;



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ passField;


	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authentication::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->loginField = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->CloseButton = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->passField);
			this->panel1->Controls->Add(this->loginField);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(481, 561);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Authentication::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->label2->Location = System::Drawing::Point(253, 480);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Зарегистрироваться";
			this->label2->Click += gcnew System::EventHandler(this, &Authentication::label2_Click_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label3->Location = System::Drawing::Point(29, 480);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Нужна учетная запись\?";
			this->label3->Click += gcnew System::EventHandler(this, &Authentication::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(82)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(145, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Вход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Authentication::button1_Click);
			// 
			// passField
			// 
			this->passField->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->passField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passField->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passField->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->passField->Location = System::Drawing::Point(120, 308);
			this->passField->Name = L"passField";
			this->passField->PasswordChar = '*';
			this->passField->Size = System::Drawing::Size(302, 51);
			this->passField->TabIndex = 4;
			this->passField->UseSystemPasswordChar = true;
			this->passField->TextChanged += gcnew System::EventHandler(this, &Authentication::passField_TextChanged);
			// 
			// loginField
			// 
			this->loginField->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->loginField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->loginField->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginField->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->loginField->Location = System::Drawing::Point(120, 209);
			this->loginField->Multiline = true;
			this->loginField->Name = L"loginField";
			this->loginField->Size = System::Drawing::Size(302, 51);
			this->loginField->TabIndex = 3;
			this->loginField->TextChanged += gcnew System::EventHandler(this, &Authentication::loginField_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(33, 289);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 70);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(33, 187);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->panel2->Controls->Add(this->CloseButton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(481, 50);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Authentication::UpperPanel_Paint);
			this->panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Authentication::panel2_MouseDown);
			this->panel2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Authentication::panel2_MouseMove);
			// 
			// CloseButton
			// 
			this->CloseButton->AutoSize = true;
			this->CloseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CloseButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->CloseButton->Location = System::Drawing::Point(457, 6);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(19, 18);
			this->CloseButton->TabIndex = 1;
			this->CloseButton->Text = L"X";
			this->CloseButton->Click += gcnew System::EventHandler(this, &Authentication::label2_Click);
			this->CloseButton->MouseEnter += gcnew System::EventHandler(this, &Authentication::CloseButton_MouseEnter);
			this->CloseButton->MouseLeave += gcnew System::EventHandler(this, &Authentication::CloseButton_MouseLeave);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->label1->Location = System::Drawing::Point(139, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Authentication::label1_Click);
			// 
			// Authentication
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(481, 561);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Authentication";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authentication";
			this->Load += gcnew System::EventHandler(this, &Authentication::Authentication_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name = loginField->Text;
	System::String^ password = passField->Text;

	std::string nameStr = msclr::interop::marshal_as<std::string>(name);
	std::string passwordStr = msclr::interop::marshal_as<std::string>(password);

	nameStr += ".txt";
	const char* nameCStr = nameStr.c_str();
	const char* passwordCStr = passwordStr.c_str();

	String^ folderPath = System::Windows::Forms::Application::StartupPath;
	std::string filePath = msclr::interop::marshal_as<std::string>(folderPath) + "\\" + nameStr;
	const char* filePathCStr = filePath.c_str();

	std::ifstream User(filePathCStr); // Открываем файл для чтения

	if (User.is_open()) {
		std::string storedPassword;
		bool found = false;

		while (std::getline(User, storedPassword)) {
			if (storedPassword == passwordStr) {
				found = true;
				break;
			}
		}

		User.close(); // Закрываем файл

		if (found) {
			// Пароль найден

			Chat^ f4 = gcnew Chat();
			f4->Owner = this;
			f4->Show();
			this->Hide();
		}
		else {
			// Пароль не найден
			MessageBox::Show("Неправильный логин или пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		// Файл не найден
		MessageBox::Show("Файл не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Authentication_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void loginField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void CloseButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	CloseButton->ForeColor = Color::FromArgb(0xFD, 0xE7, 0xE7);
	CloseButton->BackColor = Color::FromArgb(0xF2, 0x3F, 0x42);
}
private: System::Void CloseButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	CloseButton->ForeColor = Color::FromArgb(0xF2, 0xF3, 0xEA);
	CloseButton->BackColor = Color::FromArgb(0x1E, 0x1F, 0x22);
}           
	   Point lastPoint;
private: System::Void panel2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;
		
	}
}
private: System::Void UpperPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lastPoint = Point(e->X, e->Y);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void label1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_2(System::Object^ sender, System::EventArgs^ e) {

	/*Registration^ f2 = gcnew Registration();
	f2->Show(); 	
	this->Hide();*/

	Registration^ f3 = gcnew Registration();
	f3->Owner = this;
	f3->Show();
	this->Hide();
}
};
}
