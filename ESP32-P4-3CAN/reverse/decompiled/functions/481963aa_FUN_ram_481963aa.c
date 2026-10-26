/* Firmware entry: 0x481963aa */

undefined8 FUN_ram_481963aa(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = FUN_ram_4819e326();
  if ((param_3 != 0) && (iVar1 = 0x6b - (param_2 >> 0x14 & 0x7ff), 0 < iVar1)) {
    uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,iVar1 * 0x100000 + 0x3ff00000);
  }
  return uVar2;
}


