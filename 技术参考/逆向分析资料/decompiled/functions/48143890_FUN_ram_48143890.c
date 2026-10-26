/* Firmware entry: 0x48143890 */

void FUN_ram_48143890(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xc4);
  if (iVar2 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  iVar4 = *(int *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (iVar4 != -1) {
    if (iVar4 == 0) {
      iVar4 = 0x78;
    }
    *(int *)(iVar2 + 0x24) = iVar4;
  }
  uVar5 = *(uint *)(iVar2 + 0x50);
  if (uVar5 == 0xffffffff) {
    uVar3 = *(uint *)(iVar2 + 0x54);
    uVar5 = *(uint *)(iVar2 + 0x10);
    if (uVar3 == 0xffffffff) goto LAB_ram_48143928;
LAB_ram_481438d0:
    if (uVar3 == 0) {
      uVar3 = (*(uint *)(iVar2 + 0x24) & 0xfffffff8) - (*(uint *)(iVar2 + 0x24) >> 3);
      *(uint *)(iVar2 + 0x14) = uVar3;
      *(uint *)(iVar2 + 0x1c) = uVar3;
      goto LAB_ram_4814392a;
    }
    *(uint *)(iVar2 + 0x14) = uVar3;
    *(uint *)(iVar2 + 0x1c) = uVar3;
    if (uVar5 < uVar3) goto LAB_ram_481438da;
  }
  else {
    if (uVar5 == 0) {
      uVar5 = *(uint *)(iVar2 + 0x24) >> 1;
    }
    uVar3 = *(uint *)(iVar2 + 0x54);
    *(uint *)(iVar2 + 0x10) = uVar5;
    *(uint *)(iVar2 + 0x18) = uVar5;
    if (uVar3 != 0xffffffff) goto LAB_ram_481438d0;
LAB_ram_48143928:
    uVar3 = *(uint *)(iVar2 + 0x14);
LAB_ram_4814392a:
    if ((uVar5 < uVar3) || (uVar3 == 0)) {
LAB_ram_481438da:
      bVar1 = *(byte *)(iVar2 + 7);
      goto joined_r0x481438e0;
    }
  }
  bVar1 = *(byte *)(iVar2 + 7);
  *(undefined4 *)(iVar2 + 0x10) = 0;
joined_r0x481438e0:
  if ((bVar1 & 1) == 0) {
    uStack_18 = 0xff;
    if ((char)*(byte *)(iVar2 + 0x40) < '\0') {
      if (*(byte *)(iVar2 + 0x40) < 0xc0) {
        uStack_18 = 0xffff;
      }
      else {
        uStack_18 = 0xffffff;
      }
    }
  }
  else {
    uStack_18 = *(undefined4 *)(iVar2 + 0x44);
  }
  auStack_14[0] = *(undefined4 *)(iVar2 + 0x48);
  if (*(char *)(iVar2 + 5) != '\n') {
    *(undefined1 *)(iVar2 + 5) = 10;
    *(undefined1 *)(iVar2 + 6) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  if (*(char *)(iVar2 + 8) != '\0') {
    FUN_ram_4814268a(&LAB_ram_481457a2,param_1);
    *(undefined1 *)(iVar2 + 8) = 0;
  }
  FUN_ram_4813985e(param_1,iVar2 + 0x40,&uStack_18,auStack_14);
  return;
}


