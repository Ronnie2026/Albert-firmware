/* Firmware entry: 0x48124f86 */

int FUN_ram_48124f86(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48124534(&DAT_ram_4ff6c118,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar4 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                          );
  uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA disable failed!\r\n",uVar3,uVar2,0x13d,"end");
  return 0;
}


