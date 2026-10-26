/* Firmware entry: 0x481285a8 */

undefined4 FUN_ram_481285a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iStack_14 = FUN_ram_48194eb6(0x34,&DAT_ram_4823acc0);
    if (iStack_14 == 0) {
      iStack_14 = 0;
      uVar4 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkEvents.cpp"
                              );
      uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Arduino Event Malloc Failed!\r\n",uVar3,uVar2,0x5a,
                       "postEvent");
    }
    else {
      FUN_ram_4ff45158(iStack_14,param_2,0x34);
      iVar1 = FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 8),&iStack_14,0xffffffff,0);
      if (iVar1 == 1) {
        return 1;
      }
      uVar4 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkEvents.cpp"
                              );
      uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Arduino Event Send Failed!\r\n",uVar3,uVar2,0x60,
                       "postEvent");
      if (iStack_14 != 0) {
        thunk_FUN_ram_4ff209c6(iStack_14,0x34);
      }
    }
  }
  return 0;
}


