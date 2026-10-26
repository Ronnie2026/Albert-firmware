/* Firmware entry: 0x48004b24 */

uint * FUN_ram_48004b24(uint param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,uint param_8,int param_9,uint param_10)

{
  uint *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t __n;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    __n = param_4 * 4 + 0x2c;
    __s = (uint *)FUN_ram_4ff20956(4,__n,0x5000);
    if (__s == (uint *)0x0) {
      return (uint *)0x0;
    }
    param_2 = __s + 0xb;
    memset(__s,0,__n);
  }
  else {
    __s = (uint *)FUN_ram_4ff20956(4,0x2c,0x5000);
    if (__s == (uint *)0x0) {
      return (uint *)0x0;
    }
    memset(__s,0,0x2c);
  }
  uVar5 = *param_3;
  iVar1 = __popcountsi2(uVar5);
  iVar2 = __popcountsi2(param_3[1]);
  iVar3 = __popcountsi2(param_3[2]);
  iVar4 = __popcountsi2(param_3[3]);
  if (param_4 != iVar1 + iVar2 + iVar3 + iVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("regdma_link.h",0x43,"regdma_link_init_addr_map",
                     "len == regdma_link_addr_map_count(bitmap)");
  }
  __s[2] = __s[2] & 0xfffffc00 | param_4 & 0x3ff;
  __s[2] = __s[2] & 0xfff0ffff | 0x10000;
  __s[2] = __s[2] & 0xefffffff;
  __s[2] = __s[2] & 0xdfffffff | (param_8 & 1) << 0x1d;
  __s[2] = __s[2] & 0xbfffffff | (param_7 & 1) << 0x1e;
  __s[2] = __s[2] & 0x7fffffff | (uint)(param_6 == 0) << 0x1f;
  __s[7] = uVar5;
  uVar5 = param_3[1];
  __s[3] = param_6;
  __s[8] = uVar5;
  uVar5 = param_3[2];
  __s[4] = param_1;
  __s[9] = uVar5;
  uVar5 = param_3[3];
  __s[5] = param_5;
  __s[6] = (uint)param_2;
  __s[10] = uVar5;
  *__s = *__s & 0xfffffff0;
  *__s = *__s & 0xffff | param_9 << 0x10;
  __s[1] = param_10;
  return __s + 2;
}


