#pragma once
#include "playergame.h"

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_modComputadora;
	private: System::Windows::Forms::Button^ btn_modJugador;
	protected:



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_modComputadora = (gcnew System::Windows::Forms::Button());
			this->btn_modJugador = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Desktop;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(158, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LLEGAR A 100";
			// 
			// btn_modComputadora
			// 
			this->btn_modComputadora->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_modComputadora->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->btn_modComputadora->FlatAppearance->BorderSize = 2;
			this->btn_modComputadora->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modComputadora->Location = System::Drawing::Point(325, 245);
			this->btn_modComputadora->Name = L"btn_modComputadora";
			this->btn_modComputadora->Size = System::Drawing::Size(248, 43);
			this->btn_modComputadora->TabIndex = 1;
			this->btn_modComputadora->Text = L"VS. COMPUTADORA";
			this->btn_modComputadora->UseVisualStyleBackColor = false;
			// 
			// btn_modJugador
			// 
			this->btn_modJugador->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_modJugador->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->btn_modJugador->FlatAppearance->BorderSize = 2;
			this->btn_modJugador->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_modJugador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modJugador->Location = System::Drawing::Point(23, 245);
			this->btn_modJugador->Name = L"btn_modJugador";
			this->btn_modJugador->Size = System::Drawing::Size(248, 43);
			this->btn_modJugador->TabIndex = 2;
			this->btn_modJugador->Text = L"VS. JUGADOR";
			this->btn_modJugador->UseVisualStyleBackColor = false;
			this->btn_modJugador->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(595, 431);
			this->Controls->Add(this->btn_modJugador);
			this->Controls->Add(this->btn_modComputadora);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PI_LlegarA100::playergame^ playergame = gcnew PI_LlegarA100::playergame();
		this->Visible = false;
		playergame->ShowDialog();
		this->Close();
	}
};
}
