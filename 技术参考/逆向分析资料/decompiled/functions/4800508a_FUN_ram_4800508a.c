/* Firmware entry: 0x4800508a */

uint * FUN_ram_4800508a(uint param_1,uint param_2,uint param_3,uint *param_4,uint param_5,
                       uint param_6,int param_7,uint param_8)

{
  uint *__s;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (uint *)FUN_ram_4ff20956(4,0x28,0x5000);
  if (__s != (uint *)0x0) {
    memset(__s,0,0x28);
    __s[2] = __s[2] & 0xfff0ffff | 0x20000;
    __s[2] = __s[2] | 0x10000000;
    __s[2] = __s[2] & 0xdfffffff | (param_6 & 1) << 0x1d;
    __s[2] = __s[2] & 0xbfffffff | (param_5 & 1) << 0x1e;
    __s[7] = param_1;
    __s[2] = __s[2] & 0x7fffffff;
    __s[8] = param_2;
    __s[9] = param_3;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *__s = *__s & 0xfffffff0;
    __s[3] = uVar1;
    __s[4] = uVar2;
    *__s = *__s & 0xffff | param_7 << 0x10;
    __s[5] = uVar3;
    __s[6] = uVar4;
    __s[1] = param_8;
    __s = __s + 2;
  }
  return __s;
}


