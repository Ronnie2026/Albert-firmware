/* Firmware entry: 0x481230e6 */

undefined4 FUN_ram_481230e6(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [44];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x14) & 0xf) != 0) {
    uVar8 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                            );
    uVar2 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): buffer size error\r\n",uVar2,uVar1,0x1f5,
                     "_decryptBuffer");
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    iVar7 = FUN_ram_48194ed0(0x10,&DAT_ram_4823acc0);
    *(int *)(param_1 + 8) = iVar7;
    if (iVar7 == 0) {
      uVar8 = FUN_ram_4ff21a0a();
      uVar1 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Update/src/Updater.cpp"
                              );
      uVar2 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): new failed\r\n",uVar2,uVar1,0x1fc,"_decryptBuffer");
      return 0;
    }
  }
  FUN_ram_4817b4f8(auStack_44);
  uVar5 = *(uint *)(param_1 + 0x14);
  iVar7 = 0;
  while( true ) {
    if (uVar5 < 0x10) {
      return 1;
    }
    iVar6 = 0xf;
    do {
      iVar3 = (iVar7 + 0xf) - iVar6;
      puVar4 = (undefined1 *)(*(int *)(param_1 + 8) + iVar6);
      iVar6 = iVar6 + -1;
      *puVar4 = *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar3);
    } while (iVar6 != -1);
    uVar5 = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x2c) + iVar7;
    if (((uVar5 & 0x1f) == 0) || (iVar7 == 0)) {
      FUN_ram_48122ed8(param_1,uVar5,auStack_64);
      iVar6 = FUN_ram_4817b524(auStack_44,auStack_64,0x100);
      if (iVar6 != 0) {
        return 0;
      }
    }
    iVar6 = FUN_ram_4817b620(auStack_44,1,*(undefined4 *)(param_1 + 8));
    if (iVar6 != 0) break;
    iVar6 = 0xf;
    do {
      iVar3 = (iVar7 + 0xf) - iVar6;
      puVar4 = (undefined1 *)(*(int *)(param_1 + 8) + iVar6);
      iVar6 = iVar6 + -1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar3) = *puVar4;
    } while (iVar6 != -1);
    iVar7 = iVar7 + 0x10;
    uVar5 = *(int *)(param_1 + 0x14) - iVar7;
  }
  return 0;
}


