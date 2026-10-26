/* Firmware entry: 0x480cea00 */

int FUN_ram_480cea00(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_548;
  undefined1 uStack_544;
  undefined4 uStack_540;
  uint uStack_53c;
  undefined1 auStack_538 [4];
  undefined4 uStack_534;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_548 = *param_1;
  uStack_544 = 1;
  uStack_540 = 0;
  uStack_53c = 0;
  memset(auStack_538,0,0x528);
  uStack_534 = 1;
  iVar1 = FUN_ram_480ce710(&uStack_548,auStack_538);
  iVar2 = 0;
  if (((iVar1 != 0) && (iVar2 = 0, (uStack_53c & 0xff) != 0)) &&
     (iVar2 = FUN_ram_48070f54(auStack_538), iVar2 != 0)) {
    FUN_ram_4ff45158(param_2,auStack_538,0x524);
  }
  return iVar2;
}


