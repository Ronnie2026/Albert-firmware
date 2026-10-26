/* Firmware entry: 0x4808cb66 */

void FUN_ram_4808cb66(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uStack_114;
  void *pvStack_110;
  uint auStack_10c [4];
  int iStack_fc;
  undefined1 *puStack_f8;
  void *pvStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  ushort uStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvStack_ec = memset(&uStack_c0,0,0xa0);
  uStack_b8 = 0x736c;
  uStack_e8 = 0xa0;
  uStack_c0 = 0x227b;
  uStack_be = 0x6b6f;
  uStack_bc = 0x3a22;
  uStack_ba = 0x6166;
  uStack_e4 = 0xb;
  uStack_b6 = 0x65;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 1;
  uStack_d0 = 1;
  iStack_e0 = 1;
  sVar4 = strlen(param_2);
  FUN_ram_4808c96e(&pvStack_ec,"error",param_2,sVar4);
  pvStack_110 = pvStack_ec;
  if (((((char)uStack_c4 == '\0') || (iStack_e0 != 1)) || ((uStack_d0 & 0xff) == 0)) ||
     ((uStack_e8 < uStack_e4 || (uStack_e8 - uStack_e4 < 2)))) {
    uStack_c4 = uStack_c4 & 0xff00;
  }
  else {
    puVar8 = (undefined1 *)((int)pvStack_ec + uStack_e4);
    uStack_e4 = uStack_e4 + 1;
    *puVar8 = 0x7d;
    iStack_e0 = 0;
    *(undefined1 *)((int)pvStack_ec + uStack_e4) = 0;
  }
  uVar6 = uStack_e4;
  FUN_ram_4802a8a8(auStack_10c,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_fc,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,auStack_10c,&iStack_fc);
  FUN_ram_4802a59e(&iStack_fc);
  FUN_ram_4802a59e(auStack_10c);
  iVar3 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    uStack_114 = param_1;
    auStack_10c[0] = uVar6;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_114,&pvStack_110,auStack_10c);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar6 = auStack_10c[0];
    if (auStack_10c[0] == 0) {
      uVar6 = 1;
    }
    iVar5 = FUN_ram_4ff206d8(uVar6,0x404);
    iVar7 = iVar3 + iVar2 * 0x1d40;
    *(int *)(iVar7 + 0x1cdc) = iVar5;
    if (iVar5 == 0) {
      if (*(char *)(iVar7 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar3 + iVar2 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (auStack_10c[0] != 0) {
        FUN_ram_4ff45158(iVar5,pvStack_110,auStack_10c[0]);
        iVar5 = *(int *)(iVar7 + 0x1cdc);
      }
      iStack_fc = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_fc + 0x44c) != '\0') && (*(char *)(iStack_fc + 0x44c) != '\x06')) {
        *(int *)(iStack_fc + 0x1ce0) = iVar5;
        *(uint *)(iStack_fc + 0x1ce4) = auStack_10c[0];
        *(undefined4 *)(iStack_fc + 0x1ce8) = 0;
        puStack_f8 = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_114,"application/json",iStack_fc,&LAB_ram_4802d3f2
                        );
      }
    }
  }
  return;
}


