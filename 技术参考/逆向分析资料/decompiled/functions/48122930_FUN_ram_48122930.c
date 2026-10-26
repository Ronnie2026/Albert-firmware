/* Firmware entry: 0x48122930 */

undefined4 FUN_ram_48122930(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_14 = 0;
  if ((*(char *)(param_1 + 1) != '\0') && (param_2 != 0)) {
    uVar1 = FUN_ram_4815a556(*param_1,param_2,0,&uStack_14);
    if (uVar1 == 0) {
      return uStack_14;
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
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): nvs_get_blob len fail: %s %s\r\n",uVar2,uVar3,0x21b,
                     "getBytesLength",param_2,puVar4);
  }
  return 0;
}


