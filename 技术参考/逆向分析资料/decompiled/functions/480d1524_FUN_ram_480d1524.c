/* Firmware entry: 0x480d1524 */

undefined4 FUN_ram_480d1524(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  
  iVar5 = DAT_ram_4ff6dc9c;
  iVar1 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar4 = &local_50;
  iVar2 = DAT_ram_4ff6dc9c + 0x875a8;
  iVar6 = FUN_ram_480cea00(&DAT_ram_4ff5be28,iVar2);
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = FUN_ram_480880f8(iVar1 + 0x12160,iVar2);
  if (iVar6 == 0) {
    iVar6 = FUN_ram_48070f54(iVar2);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = FUN_ram_4ff4511a(iVar1 + 0x12660,iVar5 + 0x87aa8,0xc);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = *(int *)(iVar1 + 0x12678);
    iVar11 = *(int *)(iVar1 + 0x1267c);
    if (*(int *)(iVar5 + 0x87ac0) != iVar6) {
      return 0;
    }
    if (*(int *)(iVar5 + 0x87ac4) != iVar11) {
      return 0;
    }
    iVar12 = *(int *)(iVar1 + 0x12160);
    if (*(int *)(iVar5 + 0x87ac8) != iVar12) {
      return 0;
    }
    if (iVar12 == *(int *)(iVar5 + 0x875a8)) {
      return 0;
    }
    if (*(int *)(iVar5 + 0x875a8) - iVar12 < 0) {
      return 0;
    }
    iVar7 = FUN_ram_4ff4511a(iVar1 + 0x12138,iVar1 + 0x12660,0xc);
    if ((((iVar7 == 0) && (*(int *)(iVar1 + 0x12150) == iVar6)) &&
        (*(int *)(iVar1 + 0x12154) == iVar11)) && (iVar12 == *(int *)(iVar1 + 0x12158))) {
      return 0;
    }
  }
  iVar2 = FUN_ram_480713be(iVar2,0,DAT_ram_4ff6dc9c + 0x85b18);
  if (iVar2 == 0) {
    return 0;
  }
  memset((void *)(iVar1 + 0x11bc0),0,0x78);
  uVar10 = *(undefined4 *)(iVar5 + 0x875a8);
  uVar8 = *(undefined4 *)(iVar5 + 0x87ac0);
  uVar9 = *(undefined4 *)(iVar5 + 0x87ac4);
  *(undefined1 *)(iVar1 + 0x11bc0) = 1;
  *(undefined4 *)(iVar1 + 0x11c20) = uVar8;
  *(undefined4 *)(iVar1 + 0x11c24) = uVar9;
  *(undefined4 *)(iVar1 + 0x11c30) = uVar10;
  *(undefined4 *)(iVar1 + 0x11c28) = *(undefined4 *)(iVar1 + 0x11b70);
  *(undefined4 *)(iVar1 + 0x11c2c) = *(undefined4 *)(iVar1 + 0x11b74);
  puVar3 = (undefined1 *)(iVar5 + 0x87aa8);
  iVar5 = iVar1 + 0x11bc1;
  do {
    iVar2 = iVar5 + 2;
    FUN_ram_4819ad74(iVar5,3,&DAT_ram_481c3b70,*puVar3);
    puVar3 = puVar3 + 1;
    iVar5 = iVar2;
  } while (iVar2 != iVar1 + 0x11bd9);
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_ram_4817b062(DAT_ram_4ff6dc9c + 0x85b18,0x4b3,&local_50,0);
  iVar5 = iVar1 + 0x11bda;
  do {
    FUN_ram_4819ad74(iVar5,3,&DAT_ram_481c3b70,*(undefined1 *)puVar4);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    iVar5 = iVar5 + 2;
  } while (puVar4 != (undefined4 *)auStack_30);
  *(byte *)(iVar1 + 0x11a42) = *(byte *)(iVar1 + 0x11a42) | 2;
  uVar8 = FUN_ram_480b66f6();
  return uVar8;
}


