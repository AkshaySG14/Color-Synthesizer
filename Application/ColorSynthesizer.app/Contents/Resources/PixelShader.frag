uniform vec3 frag_color;

void main()

{
    vec4 color = vec4(frag_color, 1.0);
    
    gl_FragColor = color;
}
