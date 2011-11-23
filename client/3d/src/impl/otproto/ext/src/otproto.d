module otproto;

private import std.traits;

public import protocol.protocol;

private import util,
	protocol.p740;

extern(C) {
	alias uint OTPHandle;
	alias uint OTPLstnrId;
	
	nothrow		bool		otpSetSig(in ubyte id, in uint signature);
	nothrow		void		otpSetRsa(in string key);
	
	nothrow	const(OTPHandle)otpConnect(
		in string hostname, in ushort port, in bool nonblocking = false);
	nothrow		void		otpDisconnect(in OTPHandle handle);
	
	nothrow		string		otpGetHostname(in OTPHandle connection);
	nothrow	const(ushort)	otpGetPort(in OTPHandle connection);

	nothrow		void		otpSend(in OTPMsg msg);
	nothrow		void		otpPoll();
	
	nothrow	const(OTPLstnrId)	otpAddLstnr(in OTPMsgType type);
	nothrow		void		otpDelLstnr(in OTPLstnrId lstnr);
	
	nothrow	const(OTPProto)	otpGetStatSent(in OTPHandle connection);
	nothrow	const(OTPErrNo)	otpGetStatRecv(in OTPHandle connection);
	
	nothrow	const(OTPProto)	otpGetProto(in OTPHandle connection);
	nothrow	const(OTPErrNo)	otpGetError();
	
	
	enum OTPMsgType {
		Connected,
		Disconnected,
	}
	
	struct OTPMsg {
		OTPMsgType type;
	}
	
	enum OTPErrNo {
		Unknown
	}
	
	enum OTPProto {
		Auto
	}
}


class ProtoFactory : Singleton!ProtoFactory {
	Proto protos[(cast(int[]) [ EnumMembers!Protocols ]).length];
	
	Proto protoFactory(Protocols id) {
		if(protos[id] !is null)
			return protos[id];
		//FIXME: More generic way?
		Proto proto;
		switch (id) {
			case Protocols.p740:
				proto = new Proto740;
				break;
			default:
				return null;
		}
		protos[id] = proto;
		return proto;
	}
	
	enum Protocols {
		pauto = 0,
		p710 = 710,
	
		p740 = 740,
	
		p750 = 750,
	    p755 = 755,
	
		p760 = 760,
	
		p770 = 770,
		p771 = 771,
		p772 = 772,
	
		p780 = 780,
		p781 = 781,
		p782 = 782,
	
		p790 = 790,
		p791 = 791,
		p792 = 792,
	
		p800 = 800,
		p810 = 810,
		p811 = 811,
	
		p820 = 820,
		p821 = 821,
		p822 = 822,
	
		p830 = 830,
		p831 = 831,
	
		p840 = 840,
		p841 = 841,
		p842 = 842,
	
		p850 = 850,
		p853 = 853,
		p854 = 854
	}
}