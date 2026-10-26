/* Firmware entry: 0x48181820 */

undefined4 FUN_ram_48181820(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_2 * 4;
  if (uVar1 < param_4) {
    uVar2 = uVar1;
    if (uVar1 == 0) goto FUN_ram_48181880;
  }
  else {
    uVar2 = param_4;
    if (param_4 < uVar1) {
      do {
        uVar3 = uVar2 + 1;
        if ((*(uint *)((uVar2 & 0xfffffffc) + param_1) >> ((uVar2 & 3) << 3) & 0xff) != 0) {
          return 0xfffffff8;
        }
        uVar2 = uVar3;
      } while (uVar1 != uVar3);
    }
    uVar2 = param_4;
    if (param_4 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  do {
    *(char *)(param_3 + uVar3) =
         (char)(*(uint *)((uVar3 & 0xfffffffc) + param_1) >> ((uVar3 & 3) << 3));
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar2);
  if (param_4 <= uVar1) {
    return 0;
  }
FUN_ram_48181880:
  memset((void *)(param_3 + uVar1),0,param_4 + param_2 * -4);
  return 0;
}


