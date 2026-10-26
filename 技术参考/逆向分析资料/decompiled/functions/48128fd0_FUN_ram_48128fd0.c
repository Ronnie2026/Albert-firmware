/* Firmware entry: 0x48128fd0 */

char FUN_ram_48128fd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e084 == '\0') {
    DAT_ram_4ff6e084 = 1;
    iVar1 = FUN_ram_4815882a();
    DAT_ram_4ff6e084 = iVar1 == 0;
    if (iVar1 != 0) {
      uVar4 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkManager.cpp"
                              );
      uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_netif_init failed!\r\n",uVar3,uVar2,0x1d,"begin");
      if (DAT_ram_4ff6e084 == '\0') {
        return '\0';
      }
    }
  }
  FUN_ram_481283be(param_1 + 4);
  return DAT_ram_4ff6e084;
}


