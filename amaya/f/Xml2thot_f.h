/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void XmlSetElemLineNumber ( Element el );
extern void XmlParseError ( ErrorType type,
                            unsigned char *msg,
                            int line );
extern ThotBool IsXmlParsingCSS ( void );
extern void SetXmlParsingCSS ( ThotBool value );
extern void SetParsingTextArea ( ThotBool value );
extern void SetParsingScript ( ThotBool value );
extern void SetLanguagInXmlStack ( Language lang );
extern int IsWithinXmlTable ( void );
extern void SubWithinTable ( void );
extern void InsertXmlElement ( Element *el );
extern Element XmlLastLeafInElement ( Element el );
extern ThotBool IsLeadingSpaceUseless ( Element lastEl,
                                        Document doc,
                                        ThotBool sibling,
                                        ThotBool isXML );
extern void PutInXmlElement ( char *data,
                              int length );
extern void XmlStyleSheetPi ( char *PiData,
                              Element piEl );
extern void FreeXmlParserContexts ( void );
extern void ParseExternalDocument ( char *fileName,
                                    char *originalName,
                                    Element el,
                                    ThotBool isclosed,
                                    Document doc,
                                    Language lang,
                                    const char *typeName );
extern ThotBool ParseXmlBuffer ( char *xmlBuffer,
                                 Element el,
                                 ThotBool isclosed,
                                 Document doc,
                                 Language lang,
                                 char *typeName );
extern ThotBool ParseIncludedXml ( FILE *infile,
                                   char **infileBuffer,
                                   int infileBufferLength,
                                   ThotBool *infileEnd,
                                   ThotBool *infileNotToRead,
                                   char *infilePreviousBuffer,
                                   int *infileLastChar,
                                   char *htmlBuffer,
                                   int *index,
                                   int *nbLineRead,
                                   int *nbCharRead,
                                   char *typeName,
                                   Document doc,
                                   Element *el,
                                   ThotBool *isclosed,
                                   Language lang );
extern void StartXmlParser ( Document doc,
                             char *fileName,
                             char *documentName,
                             char *documentDirectory,
                             char *pathURL,
                             ThotBool withDec,
                             ThotBool withDoctype,
                             ThotBool useMath,
                             ThotBool externalDoc );

#else /* __STDC__ */

extern void XmlSetElemLineNumber ( Element el );
extern void XmlParseError ( ErrorType type,
                              unsigned char *msg,
                              int line );
extern ThotBool IsXmlParsingCSS ( void );
extern void SetXmlParsingCSS ( ThotBool value );
extern void SetParsingTextArea ( ThotBool value );
extern void SetParsingScript ( ThotBool value );
extern void SetLanguagInXmlStack ( Language lang );
extern int IsWithinXmlTable ( void );
extern void SubWithinTable ( void );
extern void InsertXmlElement ( Element *el );
extern Element XmlLastLeafInElement ( Element el );
extern ThotBool IsLeadingSpaceUseless ( Element lastEl,
                                          Document doc,
                                          ThotBool sibling,
                                          ThotBool isXML );
extern void PutInXmlElement ( char *data,
                                int length );
extern void XmlStyleSheetPi ( char *PiData,
                                Element piEl );
extern void FreeXmlParserContexts ( void );
extern void ParseExternalDocument ( char *fileName,
                                      char *originalName,
                                      Element el,
                                      ThotBool isclosed,
                                      Document doc,
                                      Language lang,
                                      const char *typeName );
extern ThotBool ParseXmlBuffer ( char *xmlBuffer,
                                   Element el,
                                   ThotBool isclosed,
                                   Document doc,
                                   Language lang,
                                   char *typeName );
extern ThotBool ParseIncludedXml ( FILE *infile,
                                     char **infileBuffer,
                                     int infileBufferLength,
                                     ThotBool *infileEnd,
                                     ThotBool *infileNotToRead,
                                     char *infilePreviousBuffer,
                                     int *infileLastChar,
                                     char *htmlBuffer,
                                     int *index,
                                     int *nbLineRead,
                                     int *nbCharRead,
                                     char *typeName,
                                     Document doc,
                                     Element *el,
                                     ThotBool *isclosed,
                                     Language lang );
extern void StartXmlParser ( Document doc,
                               char *fileName,
                               char *documentName,
                               char *documentDirectory,
                               char *pathURL,
                               ThotBool withDec,
                               ThotBool withDoctype,
                               ThotBool useMath,
                               ThotBool externalDoc );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
