#include "AI.h"

Ai::Ai(char ai_signature) {
    name = ai_signature;
}

char Ai::get_name() {
    return name;
}
