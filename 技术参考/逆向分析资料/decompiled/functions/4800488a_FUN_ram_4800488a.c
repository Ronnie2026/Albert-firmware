/* Firmware entry: 0x4800488a */

uint * FUN_ram_4800488a(uint *param_1,uint param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *__s;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_40 [6];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = local_40;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  if (0 < param_3) {
    iVar4 = 0;
    do {
      uVar3 = *param_4;
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 1;
      *puVar2 = uVar3;
      if (param_3 == iVar4) break;
      puVar2 = puVar2 + 1;
    } while (iVar4 != 4);
  }
  uVar1 = local_40[0];
  uVar8 = param_1[3];
  uVar7 = param_1[4];
  uVar5 = *param_1;
  uVar6 = *param_1;
  uVar9 = param_1[2];
  uVar10 = param_1[9];
  __s = (uint *)FUN_ram_4ff20956(4,0x1c,0x5000);
  puVar2 = __s;
  if (__s != (uint *)0x0) {
    memset(__s,0,0x1c);
    __s[2] = __s[2] & 0xfff0ffff | 0x30000;
    __s[2] = __s[2] & 0xefffffff;
    __s[2] = (uVar6 >> 0x1d & 1) << 0x1d | __s[2] & 0xdfffffff;
    __s[2] = __s[2] & 0xbfffffff | (uVar5 >> 0x1e & 1) << 0x1e;
    __s[2] = __s[2] & 0x7fffffff | (uint)(uVar1 == 0) << 0x1f;
    __s[5] = uVar8;
    __s[6] = uVar7;
    __s[3] = uVar1;
    *__s = *__s & 0xfffffff0;
    __s[4] = uVar9;
    puVar2 = __s + 2;
    *__s = *__s & 0xffff | uVar10 << 0x10;
    __s[1] = param_2;
  }
  return puVar2;
}


