/* Firmware entry: 0x481229e0 */

uint FUN_ram_481229e0(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_24[0] = FUN_ram_48122930();
  if (auStack_24[0] != 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      return auStack_24[0];
    }
    if (param_4 < auStack_24[0]) {
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      uVar1 = auStack_24[0];
      uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): not enough space in buffer: %u < %u\r\n",uVar3,uVar2,
                       0x227,"getBytes",param_4,uVar1);
    }
    else {
      uVar1 = FUN_ram_4815a556(*param_1,param_2,param_3,auStack_24);
      if (uVar1 == 0) {
        return auStack_24[0];
      }
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Preferences/src/Preferences.cpp"
                              );
      puVar4 = PTR_s_OTHER_ram_481d1f60_ram_4ff4b938;
      if (0x1100 < (int)uVar1) {
        puVar4 = (&PTR_s_OTHER_ram_481d1f60_ram_4ff4b938)[uVar1 & 0xffffeeff];
      }
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_get_blob fail: %s %s\r\n",uVar2,uVar3,0x22c,
                       "getBytes",param_2,puVar4);
    }
  }
  return 0;
}


