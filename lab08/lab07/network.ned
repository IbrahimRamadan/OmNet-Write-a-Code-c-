//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

network Network
{
    @display("bgi=background/terrain;bgb=500,315");
    submodules:
        s1: Server {
            @display("p=82,177;is=vl");
        }
        s2: Server {
            @display("p=363,185;is=vl");
        }
    connections:
        s1.out --> {  delay = 100 ms; } --> s2.in;
        s2.out --> {  delay = 100 ms; } --> s1.in;
}
