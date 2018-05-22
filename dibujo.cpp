#include "figura_class.cpp"

#include "toilet.cpp"
#include "armchair.cpp"
#include "bed.cpp"
#include "chair.cpp"
#include "sunchair.cpp"
#include "sink.cpp"
#include "table.cpp"


void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX,transY,transZ);
	glRotatef(angleY,0.0f,1.0f,0.0f);
	glRotatef(angleX, 1.0f, 0.0f, 0.0f);
	glRotatef(angleZ, 0.0f, 0.0, 1.0);


<<<<<<< HEAD
////DIBUJA CHICA
//		glTranslatef(-150,-150,-200);
//		dibuja_puntos(chica);


		dibuja_puntos(toilet);
=======
	figura chair(chairArr);
	figura toilet(toiletArr);
	figura armchair(armchairArr);
	figura sunchair(sunchairArr);
	figura sink(sinkArr);
	figura table(tableArr);
	figura bed(bedArr);

>>>>>>> 4b403b37fd7fe6a4a488b82b3c43b506f5c243c7

//DESCOMENTAR PARA VISUALIZAR LAS NUBES DE PUNTOS

	//chair.cloudPoints();
	//toilet.cloudPoints();
	//armchair.cloudPoints();
	//sunchair.cloudPoints();
	//sink.cloudPoints();
	//table.cloudPoints();
	//bed.cloudPoints();



  											
  glutSwapBuffers ( );
}
