//14-3

malloc / free -> new / delete

lista di inizializzazione costruttore:
	public:
		Stack(int s): TOS(0), size(s), buffer(new data[s])

	protected:
		int TOS;
		int size;
		data *buffer;