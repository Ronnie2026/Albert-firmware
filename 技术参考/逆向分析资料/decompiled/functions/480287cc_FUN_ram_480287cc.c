/* Firmware entry: 0x480287cc */

void FUN_ram_480287cc(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar4 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Serial number is invalid, please use number from 0 to %u\r\n"
                     ,uVar3,uVar2,0x387,"uartEnd",5);
    return;
  }
  iVar1 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
  if (iVar1 != 0) {
    while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
      iVar1 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
    }
  }
  iVar1 = param_1 * 0x24;
  FUN_ram_4802754c(param_1,(int)(char)(&DAT_ram_4ff48718)[iVar1],
                   (int)(char)(&DAT_ram_4ff48719)[iVar1],(int)(char)(&DAT_ram_4ff4871a)[iVar1],
                   (int)(char)(&DAT_ram_4ff4871b)[iVar1]);
  iVar1 = FUN_ram_4800c594(param_1);
  if (iVar1 != 0) {
    FUN_ram_4800be02(param_1);
  }
  if (param_1 == DAT_ram_4ff6dc14) {
    DAT_ram_4ff6dc14 = 0xffffffff;
    FUN_ram_480272c8();
  }
  if (*(int *)(&DAT_ram_4ff4870c + param_1 * 0x24) != 0) {
    FUN_ram_4ff3afa2(*(int *)(&DAT_ram_4ff4870c + param_1 * 0x24),0,0,0);
    return;
  }
  return;
}


