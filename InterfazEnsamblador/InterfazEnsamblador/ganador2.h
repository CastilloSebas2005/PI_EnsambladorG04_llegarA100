#pragma once

namespace InterfazEnsamblador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ganador2
	/// </summary>
	public ref class ganador2 : public System::Windows::Forms::Form
	{
	public:
		ganador2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ganador2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(7, 121);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 71);
			this->button1->TabIndex = 43;
			this->button1->Text = L"OTRA VEZ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ganador2::button1_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Red;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::Black;
			this->exit->Location = System::Drawing::Point(251, 121);
			this->exit->Margin = System::Windows::Forms::Padding(4);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(225, 71);
			this->exit->TabIndex = 42;
			this->exit->Text = L"SALIR";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &ganador2::exit_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(120, 47);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 44);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Gana Jugador 2";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ganador2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(483, 212);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label1);
			this->Name = L"ganador2";
			this->Text = L"ganador2";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
