/************************************************************************************

 Authors     :   Bradley Austin Davis <bdavis@saintandreas.org>
 Copyright   :   Copyright Brad Davis. All Rights reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 ************************************************************************************/

#pragma once
#include <glm/glm.hpp>

namespace RiftExamples {

struct Vertex {
    glm::vec4 pos;
    glm::vec4 tex;
    glm::vec4 nor;
    glm::vec4 col;

    Vertex(const glm::vec4 & pos, //
            const glm::vec4 & tex = glm::vec4(), //
            const glm::vec4 & nor = glm::vec4(), //
            const glm::vec4 & col = glm::vec4()) //
            : pos(pos), tex(tex), nor(nor), col(col) {
    }

    Vertex(const glm::vec3 & pos, //
            const glm::vec2 & tex = glm::vec2(), //
            const glm::vec3 & nor = glm::vec3(), //
            const glm::vec3 & col = glm::vec3()) //
            : pos(glm::vec4(pos, 1.0f)), tex(glm::vec4(tex, 0.0f, 1.0f)), //
              nor(glm::vec4(nor, 1.0f)), col(glm::vec4(col, 1.0f)) {
    }


    static Vertex simpleTextured(const glm::vec3 & pos, const glm::vec2 & tex) {
        return Vertex(glm::vec4(pos, 1), glm::vec4(tex, 0, 0));
    }

    static Vertex simpleColored(const glm::vec3 & pos, const glm::vec4 & col) {
        return Vertex(glm::vec4(pos, 1), glm::vec4(), glm::vec4(), col);
    }

    static Vertex simpleColored(const glm::vec3 & pos, const glm::vec3 & col) {
        return Vertex(glm::vec4(pos, 1), glm::vec4(), glm::vec4(), glm::vec4(col, 1));
    }

};


//template<class T, class R> void setVertices(const T & vertices_in, R & vertices_out) {
//    typename T::const_iterator end = vertices_in.end();
//
//    for (typename T::const_iterator itr = vertices_in.begin(); itr != end; ++itr) {
//        const Vertex & vertex = *itr;
//        vertices_out.push_back(vertex.pos);
//        vertices_out.push_back(vertex.tex);
//        vertices_out.push_back(vertex.nor);
//        vertices_out.push_back(vertex.col);
//    }
//}
//
//GLuint getVertexSize(GLuint vertexFlags) {
//    int vertexSize = 1;
//    if (vertexFlags & VERTEX_HAS_TEX) {
//        ++vertexSize;
//    }
//    if (vertexFlags & VERTEX_HAS_NORM) {
//        ++vertexSize;
//    }
//    if (vertexFlags & VERTEX_HAS_COLOR) {
//        ++vertexSize;
//    }
//    return vertexSize;
//}
//        int vertexSize = getVertexSize(vertexFlags);
//        GLuint stride = vertexSize * sizeof(V);
//        int offset = 0;
//        {
//            GLint ploc = Shaders::Program::getActivePositionAttrib();
//            glEnableVertexAttribArray(ploc);
//            glVertexAttribPointer(ploc, 4, GL_FLOAT, GL_FALSE, stride, (void *)(offset * sizeof(V)));
//            ++offset;
//        }
//        if (vertexFlags & VERTEX_HAS_TEX) {
//            GLint tloc = Shaders::Program::getActiveTextureAttrib();
//            glEnableVertexAttribArray(tloc);
//            glVertexAttribPointer(tloc, 4, GL_FLOAT, GL_FALSE, stride, (void *)(offset * sizeof(V)));
//            ++offset;
//        }
//        if (vertexFlags & VERTEX_HAS_NORM) {
//            GLint tloc = Shaders::Program::getActiveNormalAttrib();
//            glEnableVertexAttribArray(tloc);
//            glVertexAttribPointer(tloc, 4, GL_FLOAT, GL_FALSE, stride, (void *)(offset * sizeof(V)));
//            ++offset;
//        }
//        if (vertexFlags & VERTEX_HAS_COLOR) {
//            GLint tloc = Shaders::Program::getActiveColorAttrib();
//            glEnableVertexAttribArray(tloc);
//            glVertexAttribPointer(tloc, 4, GL_FLOAT, GL_FALSE, stride, (void *)(offset * sizeof(V)));
//            ++offset;
//        }
// }

}
