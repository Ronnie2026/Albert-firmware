/* Firmware entry: 0x4ff45594 */

uint * FUN_ram_4ff45594(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *__s;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = param_1;
  __s = param_1;
  puVar3 = param_2;
  if (param_3 < 4) goto LAB_ram_4ff455e2;
  do {
    param_2 = puVar3;
    __s = puVar2;
    uVar4 = *param_2;
    if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) goto LAB_ram_4ff455e2;
    param_3 = param_3 - 4;
    *__s = uVar4;
    puVar2 = __s + 1;
    puVar3 = param_2 + 1;
  } while (3 < param_3);
  param_2 = (uint *)((int)param_2 + 5);
  __s = (uint *)((int)__s + 5);
  while( true ) {
    if (param_3 == 0) {
      return param_1;
    }
    cVar1 = *(char *)((int)param_2 + -1);
    param_3 = param_3 - 1;
    *(char *)((int)__s + -1) = cVar1;
    if (cVar1 == '\0') break;
LAB_ram_4ff455e2:
    param_2 = (uint *)((int)param_2 + 1);
    __s = (uint *)((int)__s + 1);
  }
  if (param_3 == 0) {
    return param_1;
  }
  memset(__s,0,param_3);
  return param_1;
}


