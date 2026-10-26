/* Firmware entry: 0x48004ed8 */

uint * FUN_ram_48004ed8(uint param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,
                       undefined4 param_6,uint param_7,uint param_8,int param_9,uint param_10)

{
  uint *__s;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    __n = param_4 * 4 + 0x38;
    __s = (uint *)FUN_ram_4ff20956(4,__n,0x5000);
    if (__s == (uint *)0x0) goto LAB_ram_48004fce;
    memset(__s,0,__n);
    param_2 = __s + 0xe;
  }
  else {
    __s = (uint *)FUN_ram_4ff20956(4,0x38,0x5000);
    if (__s == (uint *)0x0) {
LAB_ram_48004fce:
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (uint *)0x0;
    }
    memset(__s,0,0x38);
  }
  __s[2] = __s[2] & 0xfffffc00 | param_4 & 0x3ff;
  __s[2] = __s[2] & 0xfff0ffff | 0x10000;
  __s[2] = __s[2] | 0x10000000;
  __s[2] = __s[2] & 0xdfffffff | (param_8 & 1) << 0x1d;
  __s[2] = __s[2] & 0xbfffffff | (param_7 & 1) << 0x1e;
  __s[7] = param_1;
  __s[8] = param_5;
  __s[2] = __s[2] & 0x7fffffff;
  __s[9] = (uint)param_2;
  FUN_ram_4ff45158(__s + 3,param_6,0x10);
  __s[10] = *param_3;
  __s[0xb] = param_3[1];
  __s[0xc] = param_3[2];
  __s[0xd] = param_3[3];
  *__s = *__s & 0xfffffff0;
  *__s = *__s & 0xffff | param_9 << 0x10;
  __s[1] = param_10;
  return __s + 2;
}


