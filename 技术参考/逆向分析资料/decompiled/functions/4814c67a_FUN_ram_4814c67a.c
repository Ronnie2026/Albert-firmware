/* Firmware entry: 0x4814c67a */

void FUN_ram_4814c67a(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = (uint)DAT_ram_4ff6e233;
  iVar6 = uVar7 * 2;
  if ((((*param_1 != (&DAT_ram_4ff6d11c)[uVar7 * 0xc]) ||
       (param_1[1] != (&DAT_ram_4ff6d120)[uVar7 * 0xc])) ||
      (param_1[2] != (&DAT_ram_4ff6d124)[uVar7 * 0xc])) ||
     ((param_1[3] != (&DAT_ram_4ff6d128)[uVar7 * 0xc] ||
      ((char)param_1[4] != (&DAT_ram_4ff6d12c)[uVar7 * 0x30])))) {
    uVar7 = FUN_ram_4814a1fa();
    if (uVar7 == 0xffffffff) {
      return;
    }
    iVar6 = uVar7 << 1;
  }
  iVar5 = iVar6 + uVar7;
  bVar1 = (&DAT_ram_4ff6d146)[iVar5 * 0x10];
  iVar4 = (uint)bVar1 * 0x2c;
  if ((((&DAT_ram_4ff6d130)[iVar5 * 4] != (&DAT_ram_4ff6d2fc)[(uint)bVar1 * 0xb]) ||
      ((&DAT_ram_4ff6d134)[iVar5 * 4] != *(int *)(&DAT_ram_4ff6d300 + iVar4))) ||
     (((&DAT_ram_4ff6d138)[iVar5 * 4] != *(int *)(&DAT_ram_4ff6d304 + iVar4) ||
      (((&DAT_ram_4ff6d13c)[iVar5 * 4] != *(int *)(&DAT_ram_4ff6d308 + iVar4) ||
       (iVar3 = (int)(char)bVar1, (&DAT_ram_4ff6d140)[iVar5 * 0x10] != (&DAT_ram_4ff6d30c)[iVar4])))
      ))) {
    iVar3 = FUN_ram_4814a19c(&DAT_ram_4ff6d130 + (iVar6 + uVar7) * 4);
  }
  uVar2 = DAT_ram_4ff47f7c;
  if ((-1 < iVar3) && (1 < (byte)(&DAT_ram_4ff6d320)[iVar3 * 0x2c])) {
    (&DAT_ram_4ff6d320)[iVar3 * 0x2c] = 2;
    (&DAT_ram_4ff6d324)[iVar3 * 0xb] = uVar2;
    return;
  }
  return;
}


