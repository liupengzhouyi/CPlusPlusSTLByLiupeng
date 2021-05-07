pipeline {
    agent any
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
                    make
                    ls -l
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh script:'''
                    cd build
                    echo "This is start $(pwd)"
                    './CPlusPlusSTLByLiupeng'
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
