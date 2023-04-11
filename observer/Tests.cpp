#include "observer.h"
#include "subject.h"
#include <iostream>
#include "SubjectImpl.h"
#include "gtest/gtest.h"

// Test pour vérifier que la valeur est correctement initialisée
TEST(SubjectImplTest, TestDefaultValue) {

}


int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
