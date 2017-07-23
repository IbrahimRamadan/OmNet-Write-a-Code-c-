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

#include "Server.h"

Define_Module(Server);

void Server::initialize()
{
    limit=5;
    if (strcmp("s1", getName()) == 0)
    {
        cMessage *msg = new cMessage("welcome");
        WATCH(counter);
               EV <<" Sent is Starting...... \n";
               send(msg, "out");
           }
}
void Server::handleMessage(cMessage *msg)
{
    counter++;
    if (counter==limit){

        EV <<"Simulation Is Ended ...\n";
        delete msg;
    }
    else
    {
        EV <<" MY Name IS :"<<getName()<<"\n";
        EV <<" Counter :"<<counter<<"\n";
        send(msg, "out");
        EV <<" Go Back .....\n";
    }
}

