/* Firmware entry: 0x481a98aa */

uint FUN_ram_481a98aa(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x10);
    if (param_2 < (uVar2 >> 0x17 & 0xff)) {
      uVar1 = param_2 + 3 & 0xfffffffc;
      uVar3 = 0;
      if ((uVar1 < (uint)(1 << (uVar2 >> 8 & 0x1f))) && (uVar3 = uVar1, uVar1 < 0xc)) {
        uVar3 = 0xc;
      }
    }
    else {
      uVar3 = __clzsi2(param_2);
      uVar3 = -((int)(0x80000000U >> (uVar3 & 0x1f)) / (int)(uVar2 >> 0xe & 0x3f)) & param_2;
    }
    return uVar3;
  }
  return 0;
}


