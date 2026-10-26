/* Firmware entry: 0x48123b88 */

bool FUN_ram_48123b88(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  short asStack_22 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  asStack_22[0] = 0;
  iVar1 = thunk_FUN_ram_4800fa02(param_1,asStack_22);
  if (iVar1 == 0) {
    return asStack_22[0] == 8;
  }
  uVar5 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                          );
  uVar3 = FUN_ram_480018de(iVar1);
  uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to get Current Protocols: 0x%x: %s\r\n",uVar4,uVar2
                   ,0x20f,"_wifi_is_lr_enabled",iVar1,uVar3);
  return false;
}


