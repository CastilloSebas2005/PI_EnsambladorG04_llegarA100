#pragma once

namespace PI_LlegarA100 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de playergame
	/// </summary>
	public ref class playergame : public System::Windows::Forms::Form
	{
	public:
		playergame(void)
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
		~playergame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_jugadorActual;
	protected:

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
			this->label_jugadorActual = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_jugadorActual
			// 
			this->label_jugadorActual->AutoSize = true;
			this->label_jugadorActual->ForeColor = System::Drawing::SystemColors::Control;
			this->label_jugadorActual->Location = System::Drawing::Point(224, 152);
			this->label_jugadorActual->Name = L"label_jugadorActual";
			this->label_jugadorActual->Size = System::Drawing::Size(67, 16);
			this->label_jugadorActual->TabIndex = 0;
			this->label_jugadorActual->Text = L"Jugador 1";
			// 
			// playergame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(509, 507);
			this->Controls->Add(this->label_jugadorActual);
			this->Name = L"playergame";
			this->Text = L"playergame";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
