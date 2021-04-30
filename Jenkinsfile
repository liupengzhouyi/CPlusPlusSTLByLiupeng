pipeline {
    agent any
//     agent {
//         label 'cpp'
//     }

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                git 'https://github.com/liupengzhouyi/CPlusPlusSTLByLiupeng.git'
                // sh 'mkdir build'
                sh script:'''
                    rm -rf build
                    mkdir build
                    echo "This is start $(pwd)"
                    cd build
                    echo "This is $(pwd)"
                    cmake ..
                    ls -l
                    make -j4
                    ls -l
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh 'python3 test.py'
                sh script:'''
                    echo "This is start $(pwd)"
                    './dataPipeline'
                    echo "This is $(pwd)"
                '''
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
