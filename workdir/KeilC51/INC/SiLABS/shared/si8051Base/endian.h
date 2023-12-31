
#ifndef __ENDIAN_H__
#define __ENDIAN_H__

#define bswap16(x) (((x) >> 8) | ((x) << 8))
#define bswap32(x) (((x) >> 24) | (((x) & 0x00FF0000) >> 8) \
                  | (((x) & 0x0000FF00) << 8) | ((x) << 24))

// Big Endian Compilers
#if ((defined __C51__) || (defined __RC51__) || (defined _CC51))

#define htobe16(x) (x)
#define htobe32(x) (x)
#define be16toh(x) (x)
#define be32toh(x) (x)

#define htole16(x) bswap16(x)
#define htole32(x) bswap32(x)
#define le16toh(x) bswap16(x)
#define le32toh(x) bswap32(x)

#elif ((defined SDCC) || (defined HI_TECH_C) || (defined __ICC8051__))

#define htobe16(x) bswap16(x)
#define htobe32(x) bswap32(x)
#define be16toh(x) bswap16(x)
#define be32toh(x) bswap32(x)

#define htole16(x) (x)
#define htole32(x) (x)
#define le16toh(x) (x)
#define le32toh(x) (x)

#else

#define htobe16(x) (x)
#define htobe32(x) (x)
#define be16toh(x) (x)
#define be32toh(x) (x)

#define htole16(x) (x)
#define htole32(x) (x)
#define le16toh(x) (x)
#define le32toh(x) (x)

#endif  // Compiler Definitions

#endif  // __ENDIAN_H__
