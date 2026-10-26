/* Firmware entry: 0x481818aa */

undefined4 FUN_ram_481818aa(int param_1,int param_2,undefined1 *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  size_t __n;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = param_2 * 4;
  if (uVar2 < param_4) {
    __n = param_4 + param_2 * -4;
    memset(param_3,0,__n);
    param_4 = uVar2;
    param_3 = param_3 + __n;
  }
  else {
    uVar3 = param_4;
    if (param_4 < uVar2) {
      do {
        uVar5 = uVar3 & 0xfffffffc;
        uVar6 = uVar3 & 3;
        uVar3 = uVar3 + 1;
        if ((*(uint *)(uVar5 + param_1) >> (uVar6 << 3) & 0xff) != 0) {
          return 0xfffffff8;
        }
      } while (uVar2 != uVar3);
    }
  }
  puVar4 = param_3 + (param_4 - 1);
  if (param_4 != 0) {
    do {
      uVar2 = (int)(param_3 + (param_4 - 1)) - (int)puVar4;
      *puVar4 = (char)(*(uint *)((uVar2 & 0xfffffffc) + param_1) >> ((uVar2 & 3) << 3));
      bVar1 = param_3 != puVar4;
      puVar4 = puVar4 + -1;
    } while (bVar1);
  }
  return 0;
}


