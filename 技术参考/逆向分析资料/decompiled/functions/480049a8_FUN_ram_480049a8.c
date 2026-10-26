/* Firmware entry: 0x480049a8 */

uint * FUN_ram_480049a8(uint param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,int param_8,uint param_9)

{
  uint *__s;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (uint *)0x0) {
    __n = param_3 * 4 + 0x1c;
    __s = (uint *)FUN_ram_4ff20956(4,__n,0x5000);
    if (__s == (uint *)0x0) goto LAB_ram_48004a7e;
    memset(__s,0,__n);
    param_2 = __s + 7;
  }
  else {
    __s = (uint *)FUN_ram_4ff20956(4,0x1c,0x5000);
    if (__s == (uint *)0x0) {
LAB_ram_48004a7e:
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (uint *)0x0;
    }
    memset(__s,0,0x1c);
  }
  __s[2] = __s[2] & 0xfffffc00 | param_3 & 0x3ff;
  __s[2] = __s[2] & 0xfff0ffff;
  __s[2] = __s[2] & 0xefffffff;
  __s[2] = __s[2] & 0xdfffffff | (param_7 & 1) << 0x1d;
  __s[2] = __s[2] & 0xbfffffff | (param_6 & 1) << 0x1e;
  __s[2] = __s[2] & 0x7fffffff | (uint)(param_5 == 0) << 0x1f;
  __s[3] = param_5;
  *__s = *__s & 0xfffffff0;
  __s[4] = param_1;
  __s[5] = param_4;
  *__s = *__s & 0xffff | param_8 << 0x10;
  __s[6] = (uint)param_2;
  __s[1] = param_9;
  return __s + 2;
}


