/* Firmware entry: 0x480b2722 */

/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_management_status_480b2722(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_274;
  void *pvStack_270;
  int aiStack_26c [4];
  int iStack_25c;
  undefined1 *puStack_258;
  void *pvStack_24c;
  uint uStack_248;
  uint uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined2 uStack_224;
  undefined1 auStack_220 [512];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvStack_24c = memset(auStack_220,0,0x200);
  uStack_248 = 0x200;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  auStack_220[0] = 0x7b;
  uStack_224 = 1;
  uStack_244 = 1;
  uStack_23c = 1;
  uStack_230 = 1;
  iStack_240 = 1;
  FUN_ram_480b24ba(&pvStack_24c);
  pvStack_270 = pvStack_24c;
  if (((((char)uStack_224 != '\0') && (iStack_240 == 1)) && ((uStack_230 & 0xff) != 0)) &&
     ((uStack_244 <= uStack_248 && (1 < uStack_248 - uStack_244)))) {
    iVar4 = uStack_244 + 1;
    *(undefined1 *)(uStack_244 + (int)pvStack_24c) = 0x7d;
    *(undefined1 *)((int)pvStack_24c + iVar4) = 0;
    iStack_240 = 0;
    uStack_244 = iVar4;
    FUN_ram_4802a8a8(aiStack_26c,"Cache-Control");
    FUN_ram_4802a8a8(&iStack_25c,"no-store");
    FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,aiStack_26c,&iStack_25c);
    FUN_ram_4802a59e(&iStack_25c);
    FUN_ram_4802a59e(aiStack_26c);
    iVar3 = DAT_ram_4ff5cbe8;
    iVar2 = DAT_ram_4ff5cbdc;
    uStack_274 = 200;
    cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
    if ((cVar1 != '\0') && (cVar1 != '\x06')) {
      aiStack_26c[0] = iVar4;
      if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
        DAT_ram_4ff5cbc8 = 1;
        (*DAT_ram_4ff5cbc4)(&uStack_274,&pvStack_270,aiStack_26c);
        DAT_ram_4ff5cbc8 = '\0';
      }
      iVar4 = aiStack_26c[0];
      if (aiStack_26c[0] == 0) {
        iVar4 = 1;
      }
      iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
      iVar5 = iVar3 + iVar2 * 0x1d40;
      *(int *)(iVar5 + 0x1cdc) = iVar4;
      if (iVar4 == 0) {
        if (*(char *)(iVar5 + 0x44c) != '\0') {
          FUN_ram_48065e9c(iVar3 + iVar2 * 0x1d40 + 0x1c,7);
        }
      }
      else {
        if (aiStack_26c[0] != 0) {
          FUN_ram_4ff45158(iVar4,pvStack_270,aiStack_26c[0]);
          iVar4 = *(int *)(iVar5 + 0x1cdc);
        }
        iStack_25c = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
        if ((*(char *)(iStack_25c + 0x44c) != '\0') && (*(char *)(iStack_25c + 0x44c) != '\x06')) {
          *(int *)(iStack_25c + 0x1ce0) = iVar4;
          *(int *)(iStack_25c + 0x1ce4) = aiStack_26c[0];
          *(undefined4 *)(iStack_25c + 0x1ce8) = 0;
          puStack_258 = &LAB_ram_4802d3f2;
          FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_274,"application/json",iStack_25c,
                           &LAB_ram_4802d3f2);
        }
      }
    }
    return;
  }
  FUN_ram_4808cb66(0x1f7,"management_status_capacity");
  return;
}


