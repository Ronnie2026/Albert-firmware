/* Firmware entry: 0x480b3b14 */

void FUN_ram_480b3b14(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_d8;
  void *pvStack_d4;
  uint auStack_d0 [3];
  void *pvStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  ushort uStack_9c;
  undefined1 auStack_98 [128];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48032c1a();
  if (iVar3 != 0) {
    FUN_ram_4808cb66(0x199,"ota_busy");
    return;
  }
  if (DAT_ram_4ff47e54 == '\0') {
    pcVar7 = "storage_wait";
    uVar4 = 0x1f7;
  }
  else {
    iVar3 = FUN_ram_48072e0a(param_1);
    if (iVar3 != 0) {
      FUN_ram_4ff45158(DAT_ram_4ff6dcc8,param_1,0x28b);
      iVar3 = DAT_ram_4ff6dcc8;
      DAT_ram_4ff47e54 = 1;
      DAT_ram_4ff47e58 = *(undefined4 *)(param_1 + 0x284);
      fence();
      uVar10 = *(undefined4 *)(param_1 + 0x284);
      DAT_ram_4ff6de90 = DAT_ram_4ff6de90 | 0x100;
      uVar4 = FUN_ram_48025ba6();
      iVar2 = DAT_ram_4ff6dcc8;
      *(undefined4 *)(iVar3 + 0xf94) = uVar4;
      *(undefined2 *)(iVar3 + 0xffc) = 0x100;
      *(undefined4 *)(iVar3 + 0xf90) = uVar10;
      *(undefined4 *)(iVar3 + 0xff8) = 0;
      *(undefined1 *)(iVar3 + 0xffe) = 0;
      *(undefined4 *)(iVar3 + 0xff4) = 0;
      *(undefined **)(iVar2 + 0x6404) = &DAT_ram_481c3e20;
      *(undefined **)(iVar2 + 0x640c) = &DAT_ram_481c3e20;
      *(undefined1 **)(iVar2 + 0x6408) = &DAT_ram_481df390;
      *(undefined1 **)(iVar2 + 0x6410) = &DAT_ram_481df390;
      *(undefined1 *)(iVar2 + 0x6400) = 0;
      *(undefined4 *)(iVar2 + 0x63ec) = 0;
      *(undefined4 *)(iVar2 + 0x63e8) = 0;
      pvStack_c4 = memset(auStack_98,0,0x78);
      auStack_98[0] = 0x7b;
      uStack_c0 = 0x78;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 1;
      uStack_bc = 1;
      uStack_b4 = 1;
      uStack_a8 = 1;
      iStack_b8 = 1;
      FUN_ram_4808c2dc(&pvStack_c4,&DAT_ram_481c4274,1);
      FUN_ram_4808c96e(&pvStack_c4,"persistence","stored",6);
      FUN_ram_480b2068(&pvStack_c4,"generation",*(undefined4 *)(param_1 + 0x284));
      if (((((char)uStack_9c == '\0') || (iStack_b8 != 1)) || ((char)uStack_a8 == '\0')) ||
         ((uStack_c0 < uStack_bc || (uStack_c0 - uStack_bc < 2)))) {
        uStack_9c = uStack_9c & 0xff00;
      }
      else {
        puVar9 = (undefined1 *)((int)pvStack_c4 + uStack_bc);
        uStack_bc = uStack_bc + 1;
        *puVar9 = 0x7d;
        iStack_b8 = 0;
        *(undefined1 *)((int)pvStack_c4 + uStack_bc) = 0;
      }
      iVar2 = DAT_ram_4ff5cbe8;
      iVar3 = DAT_ram_4ff5cbdc;
      pvStack_d4 = pvStack_c4;
      uStack_d8 = 200;
      cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
      if ((cVar1 != '\0') && (cVar1 != '\x06')) {
        auStack_d0[0] = uStack_bc;
        if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
          DAT_ram_4ff5cbc8 = 1;
          (*DAT_ram_4ff5cbc4)(&uStack_d8,&pvStack_d4,auStack_d0);
          DAT_ram_4ff5cbc8 = '\0';
        }
        uVar5 = auStack_d0[0];
        if (auStack_d0[0] == 0) {
          uVar5 = 1;
        }
        iVar6 = FUN_ram_4ff206d8(uVar5,0x404);
        iVar8 = iVar2 + iVar3 * 0x1d40;
        *(int *)(iVar8 + 0x1cdc) = iVar6;
        if (iVar6 == 0) {
          if (*(char *)(iVar8 + 0x44c) != '\0') {
            FUN_ram_48065e9c(iVar2 + iVar3 * 0x1d40 + 0x1c,7);
          }
        }
        else {
          if (auStack_d0[0] != 0) {
            FUN_ram_4ff45158(iVar6,pvStack_d4,auStack_d0[0]);
            iVar6 = *(int *)(iVar8 + 0x1cdc);
          }
          iVar3 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if ((*(char *)(iVar3 + 0x44c) != '\0') && (*(char *)(iVar3 + 0x44c) != '\x06')) {
            *(int *)(iVar3 + 0x1ce0) = iVar6;
            *(uint *)(iVar3 + 0x1ce4) = auStack_d0[0];
            *(undefined4 *)(iVar3 + 0x1ce8) = 0;
            FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_d8,"application/json",iVar3,&LAB_ram_4802d3f2)
            ;
          }
        }
      }
      return;
    }
    pcVar7 = "flash_write";
    uVar4 = 500;
  }
  FUN_ram_4808cb66(uVar4,pcVar7);
  return;
}


