/* Firmware entry: 0x481214a0 */

void FUN_ram_481214a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48026516(param_1,1);
  if (iVar1 != 0) {
    FUN_ram_4812aa8c(param_1,param_2);
    return;
  }
  uVar4 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-gpio.c"
                          );
  uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): IO %i is not set as GPIO. Execute digitalMode(%i, OUTPUT) first.\r\n"
                   ,uVar3,uVar2,0xb5,"__digitalWrite",param_1,param_1);
  return;
}


