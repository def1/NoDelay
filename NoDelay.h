/**************************************************************************/
/*!
    @file     NoDelay.h
    @author   Mario Avenoso (M-tech Creations)
    
	@section LICENSE

    The MIT License (MIT)

	Copyright (c) 2015 Mario Avenoso (M-tech Creations)

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.

*/
/**************************************************************************/

#ifndef _NoDelay_h_
#define _NoDelay_h_
typedef void (*funTocall)(void);
class noDelay{
	public:
	noDelay(void);
	noDelay(int dtime);
	noDelay(int dtime, funTocall funcall);
	
	
	void setdelay(unsigned long);
	bool update();
	void fupdate();
	
	private:
	unsigned long preMills, curMills, delaytime;
	funTocall _funcall;
};

#endif