#pragma once
#include "conexionMySql.h"

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
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::TextBox^ txNombre;
	protected:


	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtCedula;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtEdad;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->txNombre = (gcnew System::Windows::Forms::TextBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(31, 49);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(47, 13);
			this->lblNombre->TabIndex = 0;
			this->lblNombre->Text = L"Nombre:";
			// 
			// txNombre
			// 
			this->txNombre->Location = System::Drawing::Point(84, 42);
			this->txNombre->Name = L"txNombre";
			this->txNombre->Size = System::Drawing::Size(100, 20);
			this->txNombre->TabIndex = 1;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(84, 224);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 2;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &Form1::btnDibujar_Click);
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(84, 80);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(100, 20);
			this->txtApellido->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Apellido";
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(84, 121);
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(100, 20);
			this->txtCedula->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Cedula:";
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(84, 162);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(100, 20);
			this->txtEdad->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Edad:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(282, 254);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(270, 163);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 497);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtCedula);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txNombre);
			this->Controls->Add(this->lblNombre);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDibujar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Instanciamos la clase conexion 
		//ConexionMySql^ conn = gcnew ConexionMySql();
		//Preparamos la consulta
		//String^ consulta = "INSERT INTO persona(nombre, apellido, cedula, edad) VALUES('" + txNombre->Text + "', '" + txtApellido->Text + "', '" + txtCedula->Text + "', '" + txtEdad->Text + "')";
		//Ejecutamos la consulta
		//conn->ejecutarConsulta(consulta);
		//Mostramos los datos
		dataGridView1->DataSource = conn->getDatos();
		//Cerramos la conexión
		conn->cerrarConexion();

		//se crea  una grafica a partir de los datos del datagrid utilizando coordenadas y puntos:
		//Declaramos un nuevo objeto de tipo Graphics
		Graphics^ g = this->CreateGraphics();
		//Declaramos un nuevo objeto de tipo Pen
		Pen^ p = gcnew Pen(Color::Blue, 3);
		//Declaramos las variables para las coordenadas
		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		//Recorremos todas las filas del datagrid
		for (int i = 0; i < dataGridView1->RowCount - 1; i++)
		{
			//Asignamos a las variables los valores de la columna edad
			x1 = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value);
			x2 = Convert::ToInt32(dataGridView1->Rows[i + 1]->Cells[3]->Value);
			//Asignamos a las variables los valores de la columna cantidad
			y1 = Convert::ToInt32(dataGridView1->Rows[i]->Cells[2]->Value);
			y2 = Convert::ToInt32(dataGridView1->Rows[i + 1]->Cells[2]->Value);
			//Dibujamos una línea entre los dos puntos
			g->DrawLine(p, x1, y1, x2, y2);
		}
	
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
