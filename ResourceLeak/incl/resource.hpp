/*****************************************************************************/
/*                                                                           */
/* Resource.hpp                                                              */
/* Project: W-SWFIT: Resource Leak                                           */
/* Authors: Paul Jordan                                                      */
/* Date Created:  8 May 2016                                                 */
/* Description: Abstract resource header file.  Each resource implements     */
/* abstract class.                                                           */
/*                                                                           */
/* Copyright (c) 2016                                                        */
/*                                                                           */
/*****************************************************************************/

#ifndef RESOURCE_H
#define RESOURCE_H

class Resource {
  public:
    virtual bool start(int rate) = 0;
    virtual bool stop() = 0;
    bool running() const { return _running; }
    int rate() const { return _rate; }

  private:
    bool _running = false;
    int _rate = 0;

};

#endif