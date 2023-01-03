#include <Windows.h>
#pragma once


namespace LoginScreen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::Label^ Username_text;
	private: System::Windows::Forms::Label^ Password_text;
	private: System::Windows::Forms::TextBox^ Username_textbox;
	private: System::Windows::Forms::TextBox^ Password_textbox;
	private: System::Windows::Forms::Button^ SignInButton;
	private: System::Windows::Forms::Button^ ExitButton;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Username_text = (gcnew System::Windows::Forms::Label());
			this->Password_text = (gcnew System::Windows::Forms::Label());
			this->Username_textbox = (gcnew System::Windows::Forms::TextBox());
			this->Password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->SignInButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Title->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Title->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(12, 101);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(477, 62);
			this->Title->TabIndex = 0;
			this->Title->Text = L"SIGN IN                         ";
			// 
			// Username_text
			// 
			this->Username_text->AutoSize = true;
			this->Username_text->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username_text->Location = System::Drawing::Point(12, 205);
			this->Username_text->Name = L"Username_text";
			this->Username_text->Size = System::Drawing::Size(99, 23);
			this->Username_text->TabIndex = 1;
			this->Username_text->Text = L"Username :";
			// 
			// Password_text
			// 
			this->Password_text->AutoSize = true;
			this->Password_text->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password_text->Location = System::Drawing::Point(12, 244);
			this->Password_text->Name = L"Password_text";
			this->Password_text->Size = System::Drawing::Size(94, 23);
			this->Password_text->TabIndex = 2;
			this->Password_text->Text = L"Password :";
			// 
			// Username_textbox
			// 
			this->Username_textbox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Username_textbox->ForeColor = System::Drawing::SystemColors::Menu;
			this->Username_textbox->Location = System::Drawing::Point(117, 209);
			this->Username_textbox->Name = L"Username_textbox";
			this->Username_textbox->Size = System::Drawing::Size(494, 20);
			this->Username_textbox->TabIndex = 3;
			// 
			// Password_textbox
			// 
			this->Password_textbox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Password_textbox->ForeColor = System::Drawing::SystemColors::Menu;
			this->Password_textbox->Location = System::Drawing::Point(117, 248);
			this->Password_textbox->Name = L"Password_textbox";
			this->Password_textbox->Size = System::Drawing::Size(494, 20);
			this->Password_textbox->TabIndex = 4;
			// 
			// SignInButton
			// 
			this->SignInButton->BackColor = System::Drawing::Color::LightSeaGreen;
			this->SignInButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->SignInButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignInButton->FlatAppearance->BorderSize = 0;
			this->SignInButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SignInButton->Font = (gcnew System::Drawing::Font(L"Stencil", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInButton->ForeColor = System::Drawing::Color::White;
			this->SignInButton->Location = System::Drawing::Point(12, 371);
			this->SignInButton->Name = L"SignInButton";
			this->SignInButton->Size = System::Drawing::Size(127, 58);
			this->SignInButton->TabIndex = 5;
			this->SignInButton->Text = L"SIGN IN";
			this->SignInButton->UseVisualStyleBackColor = false;
			this->SignInButton->Click += gcnew System::EventHandler(this, &Form1::SignInButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::Transparent;
			this->ExitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->ExitButton->FlatAppearance->BorderSize = 3;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Stencil", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::Red;
			this->ExitButton->Location = System::Drawing::Point(790, 12);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(62, 57);
			this->ExitButton->TabIndex = 6;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Form1::ExitApp);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(864, 441);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->SignInButton);
			this->Controls->Add(this->Password_textbox);
			this->Controls->Add(this->Username_textbox);
			this->Controls->Add(this->Password_text);
			this->Controls->Add(this->Username_text);
			this->Controls->Add(this->Title);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Window";
			this->Load += gcnew System::EventHandler(this, &Form1::Window_load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Window_load(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void ExitApp(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();

	}
	private: System::Void SignInButton_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Username_textbox ->Text == "Root") {
			if (Password_textbox->Text == "Admin") {



				MessageBox::Show("Access GRANTED", "Sign in successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

				Sleep(10);

				Application::Exit();
				
				

			}else {
				MessageBox::Show("Access DENIED", "Sign in failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


	}
};
}
