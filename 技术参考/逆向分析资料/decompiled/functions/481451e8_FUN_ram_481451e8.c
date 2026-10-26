/* Firmware entry: 0x481451e8 */

void FUN_ram_481451e8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uStack_3a;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(iVar2 + 5);
  if (cVar1 == '\0') {
    return;
  }
  cStack_24 = *(char *)(iVar2 + 0x3c);
  uStack_38 = *(undefined4 *)(iVar2 + 0x28);
  if (cStack_24 == '\x06') {
    uStack_2c = *(undefined4 *)(iVar2 + 0x34);
    uStack_34 = *(undefined4 *)(iVar2 + 0x2c);
    uStack_30 = *(undefined4 *)(iVar2 + 0x30);
    uStack_28 = *(undefined1 *)(iVar2 + 0x38);
  }
  else {
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_28 = 0;
  }
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x38) = 0;
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if ((cVar1 == '\n') || ((byte)(cVar1 - 4U) < 2)) {
    *(undefined1 *)(iVar2 + 5) = 0;
    *(undefined1 *)(iVar2 + 6) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    iVar3 = FUN_ram_4814369e(param_1,iVar2,7,&uStack_3a);
    if (iVar3 != 0) {
      uVar6 = (uint)uStack_3a;
      iVar8 = *(int *)(iVar3 + 4);
      iVar7 = iVar8 + 0xf0;
      if (0x45 < uVar6 + 6) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_48143a34();
      }
      *(undefined1 *)(iVar7 + uVar6) = 0x36;
      *(undefined1 *)((uVar6 + 1 & 0xffff) + iVar7) = 4;
      uStack_3a = (ushort)((uVar6 + 2) * 0x10000 >> 0x10);
      uVar4 = FUN_ram_48137fd6(uStack_38);
      uStack_3a = FUN_ram_48143a84(uVar6 + 2 & 0xffff,iVar7,uVar4);
      FUN_ram_4814e070(param_1,*(undefined1 *)(iVar2 + 5),iVar8,&uStack_3a);
      uVar6 = uStack_3a + 1 & 0xffff;
      *(undefined1 *)((uint)uStack_3a + iVar7) = 0xff;
      if (0x43 < uVar6) goto LAB_ram_48145376;
      do {
        do {
          puVar5 = (undefined1 *)(iVar7 + uVar6);
          uVar6 = uVar6 + 1 & 0xffff;
          *puVar5 = 0;
        } while (uVar6 < 0x44);
LAB_ram_48145376:
      } while (((uVar6 & 3) != 0) && (uVar6 == 0x44));
      FUN_ram_4813af5e(iVar3,uVar6 + 0xf0 & 0xffff);
      FUN_ram_4814310e(DAT_ram_4ff6e214,iVar3,&uStack_38,0x43,param_1);
      FUN_ram_4813ac74(iVar3);
    }
    FUN_ram_4813985e(param_1,&DAT_ram_48236f9c,&DAT_ram_48236f9c,&DAT_ram_48236f9c);
    FUN_ram_4814e98a(param_1,iVar2 + 0x58);
    cVar1 = *(char *)(iVar2 + 8);
  }
  else {
    *(undefined1 *)(iVar2 + 5) = 0;
    *(undefined1 *)(iVar2 + 6) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    FUN_ram_4814e98a(param_1,iVar2 + 0x58);
    cVar1 = *(char *)(iVar2 + 8);
  }
  if (cVar1 == '\0') {
    cVar1 = *(char *)(iVar2 + 4);
  }
  else {
    FUN_ram_4814268a(&LAB_ram_481457a2,param_1);
    cVar1 = *(char *)(iVar2 + 4);
    *(undefined1 *)(iVar2 + 8) = 0;
  }
  if (cVar1 != '\0') {
    FUN_ram_48143afc();
    *(undefined1 *)(iVar2 + 4) = 0;
    return;
  }
  return;
}


