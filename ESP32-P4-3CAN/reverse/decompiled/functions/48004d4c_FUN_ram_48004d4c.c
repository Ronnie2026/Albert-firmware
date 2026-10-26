/* Firmware entry: 0x48004d4c */

uint * FUN_ram_48004d4c(uint param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,
                       uint param_6,uint param_7,int param_8,uint param_9)

{
  uint *__s;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    __n = param_3 * 4 + 0x28;
    __s = (uint *)FUN_ram_4ff20956(4,__n,0x5000);
    if (__s == (uint *)0x0) goto LAB_ram_48004e30;
    memset(__s,0,__n);
    param_2 = __s + 10;
  }
  else {
    __s = (uint *)FUN_ram_4ff20956(4,0x28,0x5000);
    if (__s == (uint *)0x0) {
LAB_ram_48004e30:
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (uint *)0x0;
    }
    memset(__s,0,0x28);
  }
  __s[2] = __s[2] & 0xfffffc00 | param_3 & 0x3ff;
  __s[2] = __s[2] & 0xfff0ffff;
  __s[2] = __s[2] | 0x10000000;
  __s[2] = __s[2] & 0xdfffffff | (param_7 & 1) << 0x1d;
  __s[2] = __s[2] & 0xbfffffff | (param_6 & 1) << 0x1e;
  __s[7] = param_1;
  __s[8] = param_4;
  __s[2] = __s[2] & 0x7fffffff;
  __s[9] = (uint)param_2;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *__s = *__s & 0xfffffff0;
  __s[3] = uVar1;
  *__s = *__s & 0xffff | param_8 << 0x10;
  __s[4] = uVar2;
  __s[5] = uVar3;
  __s[6] = uVar4;
  __s[1] = param_9;
  return __s + 2;
}


